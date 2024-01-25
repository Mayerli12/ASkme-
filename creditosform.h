#ifndef CREDITOSFORM_H
#define CREDITOSFORM_H

#include <QWidget>
#include <QList>
#include <QDesktopServices>
#include <QListWidgetItem>

#include <contribuidores.h>

namespace Ui {
class CreditosForm;
}

class CreditosForm : public QWidget
{
    Q_OBJECT

public:
    explicit CreditosForm(QWidget *parent = nullptr);
    ~CreditosForm();

    void agregarContribuidores(const Contribuidores &contribuidor);

private slots:
    void on_listCreditos_itemClicked(QListWidgetItem *item);

private:
    Ui::CreditosForm *ui;
    QList<Contribuidores> contribuidores;
};

#endif // CREDITOSFORM_H

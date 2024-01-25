#ifndef CONTRIBUIDORES_H
#define CONTRIBUIDORES_H

#include <QString>
#include <QUrl>

class Contribuidores
{
public:
    Contribuidores();
    Contribuidores(const QString &nombre, const QUrl &url);

    const QString &getNombre() const;
    const QUrl &getUrl() const;

private:
    QString m_nombre;
    QUrl m_url;
};

#endif // CONTRIBUIDORES_H


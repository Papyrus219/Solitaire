#ifndef GIGATHON_H
#define GIGATHON_H

#include <interfaces/iplugin.h>

class Gigathon : public KDevelop::IPlugin
{
    Q_OBJECT

public:
    // KPluginFactory-based plugin wants constructor with this signature
    Gigathon(QObject* parent, const KPluginMetaData& metaData, const QVariantList& args);
};

#endif // GIGATHON_H

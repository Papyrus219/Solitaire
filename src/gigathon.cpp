#include "gigathon.h"

#include <debug.h>

#include <KPluginFactory>

K_PLUGIN_FACTORY_WITH_JSON(GigathonFactory, "gigathon.json", registerPlugin<Gigathon>(); )

Gigathon::Gigathon(QObject* parent, const KPluginMetaData& metaData, const QVariantList& args)
    : KDevelop::IPlugin(QStringLiteral("gigathon"), parent, metaData)
{
    Q_UNUSED(args);

    qCDebug(PLUGIN_GIGATHON) << "Hello world, my plugin is loaded!";
}

// needed for QObject class created from K_PLUGIN_FACTORY_WITH_JSON
#include "gigathon.moc"
#include "moc_gigathon.cpp"

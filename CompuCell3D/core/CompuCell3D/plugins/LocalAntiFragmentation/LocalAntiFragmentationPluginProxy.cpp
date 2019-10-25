        

#include "LocalAntiFragmentationPlugin.h"



#include <CompuCell3D/Simulator.h>

using namespace CompuCell3D;



#include <BasicUtils/BasicPluginProxy.h>



BasicPluginProxy<Plugin, LocalAntiFragmentationPlugin>

localAntiFragmentationProxy("LocalAntiFragmentation", "Autogenerated plugin - the author of the plugin should provide brief description here",

         &Simulator::pluginManager);


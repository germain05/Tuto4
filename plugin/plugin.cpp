#include <gazebo/gazebo.hh>

namespace gazebo
{
  class MyfistPlugin : public WorldPlugin
  {
    public: MyfistPlugin() : WorldPlugin()
            {
              printf("Welcome to Germain world!\n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(MyfistPlugin)
}

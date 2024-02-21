#include <gazebo/gazebo.hh>

namespace gazebo
{
	class WelcomeWorldPluginMyRobot : public WorldPlugin
	{
		public: WelcomeWorldPluginMyRobot() : WorldPlugin()
		{
			printf("Welcome to my world!\n");
		}
		public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
		{}
	};
	GZ_REGISTER_WORLD_PLUGIN(WelcomeWorldPluginMyRobot)
}

%package -n patterns-sailfish-device-configuration-mido
Summary: Jolla Configuration mido
Requires: patterns-sailfish-device-configuration-common-mido
Requires: patterns-sailfish-device-adaptation-mido
# For devices with cellular modem. Those without one, please comment out:
Requires: patterns-sailfish-cellular-apps
# Early stages of porting benefit from these:
Requires: patterns-sailfish-dev-tools
Requires: patterns-sailfish-rnd
Requires: libhybris-tests
Requires: busybox-static
Requires: openssh-server
Requires: zypper
Requires: sailfish-content-graphics-z%{icon_res}

# For multi-SIM devices
Requires: jolla-settings-networking-multisim

# Introduced starting Sailfish OS 2.0.4.x:
# 3rd party accounts like Twitter, VK, cloud services, etc
Requires: jolla-settings-accounts-extensions-3rd-party-all

# For Mozilla location services (online)
Requires: geoclue-provider-mlsdb

# Sailfish OS CSD tool for hardware testing
# needs some configuration to get all features working

# Devices with 2G or more memory should also include this booster
# to improve camera startup times and the like
Requires: mapplauncherd-booster-silica-qt5-media

# Introduced starting Sailfish OS 2.1.1.26
# Required for Jolla Store Access
Requires: patterns-sailfish-consumer-generic

%description -n patterns-sailfish-device-configuration-mido
Pattern with packages for mido configurations

%files -n patterns-sailfish-device-configuration-mido

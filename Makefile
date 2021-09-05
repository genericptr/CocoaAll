FPC=/usr/local/lib/fpc/3.3.1/ppcx64
OUTPUT=units
OPTS=-vbr -dMACOSALL -FU${OUTPUT}

all:
	mkdir -p ${OUTPUT}

	${FPC} CocoaAll.pas -dCOCOAALL ${OPTS}

	# macOS 11.3 SDK

	${FPC} AddressBook.pas ${OPTS}
	${FPC} UserNotifications.pas ${OPTS}
	${FPC} UserNotificationsUI.pas ${OPTS}
	${FPC} Contacts.pas ${OPTS}
	${FPC} ContactsUI.pas ${OPTS}
	${FPC} CoreAudioKit.pas ${OPTS}
	${FPC} SensorKit.pas ${OPTS}
	${FPC} QuickLook.pas ${OPTS}
	${FPC} QuickLookUI.pas ${OPTS}
	${FPC} CoreML.pas ${OPTS}
	${FPC} CoreBluetooth.pas ${OPTS}
	${FPC} CoreHaptics.pas ${OPTS}
	${FPC} CoreWLAN.pas ${OPTS}
	${FPC} PrintCore.pas ${OPTS}
	${FPC} PushKit.pas ${OPTS}
	${FPC} MetricKit.pas ${OPTS}
	${FPC} ReplayKit.pas ${OPTS}
	${FPC} EventKit.pas ${OPTS}
	${FPC} AppleScriptObjC.pas ${OPTS}
	${FPC} Automator.pas ${OPTS}
	${FPC} CloudKit.pas ${OPTS}
	${FPC} StoreKit.pas ${OPTS}
	${FPC} CoreLocation.pas ${OPTS}
	${FPC} ImageCaptureCore.pas ${OPTS}
	${FPC} ImageKit.pas ${OPTS}
	${FPC} PDFKit.pas ${OPTS}
	${FPC} MapKit.pas ${OPTS}
	${FPC} SceneKit.pas ${OPTS}
	${FPC} SpriteKit.pas ${OPTS}
	${FPC} GameKit.pas ${OPTS}
	${FPC} GameplayKit.pas ${OPTS}
	${FPC} WebKit.pas ${OPTS}
	${FPC} AVFAudio.pas ${OPTS}
	${FPC} Photos.pas ${OPTS}
	${FPC} PhotosUI.pas ${OPTS}
	${FPC} ModelIO.pas ${OPTS}
	${FPC} Metal.pas ${OPTS}
	${FPC} MetalKit.pas ${OPTS}
	${FPC} CalendarStore.pas ${OPTS}
	${FPC} AVFoundation.pas ${OPTS}
	${FPC} QuartzCore.pas ${OPTS}
	${FPC} CoreAudio.pas ${OPTS}
	${FPC} CoreData.pas ${OPTS}
	${FPC} CoreMedia.pas ${OPTS}
	${FPC} CoreVideo.pas ${OPTS}

	# Merged from macOS 10.10 SDK

	${FPC} Accounts.pas ${OPTS}
	${FPC} FinderSync.pas ${OPTS}
	${FPC} MediaLibrary.pas ${OPTS}
	${FPC} QTKit.pas ${OPTS}
	${FPC} IOBluetooth.pas ${OPTS}
	${FPC} SecurityFoundation.pas ${OPTS}
	${FPC} IOBluetoothUI.pas ${OPTS}
	${FPC} PreferencePanes.pas ${OPTS}
	${FPC} ScreenSaver.pas ${OPTS}
	${FPC} ScriptingBridge.pas ${OPTS}
	${FPC} QuartzFilters.pas ${OPTS}
	${FPC} SecurityInterface.pas ${OPTS}
	${FPC} Collaboration.pas ${OPTS}
	${FPC} CoreMediaIO.pas ${OPTS}
	${FPC} GLKit.pas ${OPTS}
	${FPC} CFOpenDirectory.pas ${OPTS}
	${FPC} Social.pas ${OPTS}
	${FPC} MultipeerConnectivity.pas ${OPTS}
	${FPC} AudioVideoBridging.pas ${OPTS}
	${FPC} QuartzComposer.pas ${OPTS}
	${FPC} PubSub.pas ${OPTS}
	${FPC} LocalAuthentication.pas ${OPTS}
	${FPC} InstantMessage.pas ${OPTS}
	${FPC} NotificationCenter.pas ${OPTS}
	${FPC} MediaAccessibility.pas ${OPTS}
	${FPC} iTunesLibrary.pas ${OPTS}
	${FPC} OSAKit.pas ${OPTS}
	${FPC} SyncServices.pas ${OPTS}
	${FPC} OpenDirectory.pas ${OPTS}
	${FPC} InstallerPlugins.pas ${OPTS}
	${FPC} AVKit.pas ${OPTS}
	${FPC} ServiceManagement.pas ${OPTS}
	${FPC} GameController.pas ${OPTS}
	${FPC} InputMethodKit.pas ${OPTS}
	${FPC} CryptoTokenKit.pas ${OPTS}

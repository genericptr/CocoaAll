{ Parsed from CoreBluetooth.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreBluetooth.framework/Headers/CBCentralManager.h }

{$ifdef TYPES}
type
  CBCentralManagerPtr = ^CBCentralManager;
  CBCentralManagerDelegateProtocolPtr = ^CBCentralManagerDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  CBCentralManagerState = NSInteger;
  CBCentralManagerStatePtr = ^CBCentralManagerState;

const
  CBCentralManagerStateUnknown = CBManagerStateUnknown;
  CBCentralManagerStateResetting = CBManagerStateResetting;
  CBCentralManagerStateUnsupported = CBManagerStateUnsupported;
  CBCentralManagerStateUnauthorized = CBManagerStateUnauthorized;
  CBCentralManagerStatePoweredOff = CBManagerStatePoweredOff;
  CBCentralManagerStatePoweredOn = CBManagerStatePoweredOn;

type
  CBConnectionEvent = NSInteger;
  CBConnectionEventPtr = ^CBConnectionEvent;

const
  CBConnectionEventPeerDisconnected = 0;
  CBConnectionEventPeerConnected = 1;

type
  CBCentralManagerFeature = NSUInteger;
  CBCentralManagerFeaturePtr = ^CBCentralManagerFeature;

const
  CBCentralManagerFeatureExtendedScanAndConnect = 1 shl 0;
{$endif}

{$ifdef CLASSES}

type
  CBCentralManager = objcclass external (CBManager)
  public
    procedure setDelegate(newValue: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
    function isScanning: objcbool; message 'isScanning'; { available in 10_13, 9_0 }
    class function supportsFeatures (features: CBCentralManagerFeature): objcbool; message 'supportsFeatures:'; { available in 13_0 }
    function init: id; message 'init';
    function initWithDelegate_queue (delegate_: id; queue: dispatch_queue_t): id; message 'initWithDelegate:queue:';
    function initWithDelegate_queue_options (delegate_: id; queue: dispatch_queue_t; options: NSDictionary): id; message 'initWithDelegate:queue:options:'; { available in 10_9, 7_0 }
    function retrievePeripheralsWithIdentifiers (identifiers: NSArray): NSArray; message 'retrievePeripheralsWithIdentifiers:'; { available in 10_9, 7_0 }
    function retrieveConnectedPeripheralsWithServices (serviceUUIDs: NSArray): NSArray; message 'retrieveConnectedPeripheralsWithServices:'; { available in 10_9, 7_0 }
    procedure scanForPeripheralsWithServices_options (serviceUUIDs: NSArray; options: NSDictionary); message 'scanForPeripheralsWithServices:options:';
    procedure stopScan; message 'stopScan';
    procedure connectPeripheral_options (peripheral: CBPeripheral; options: NSDictionary); message 'connectPeripheral:options:';
    procedure cancelPeripheralConnection (peripheral: CBPeripheral); message 'cancelPeripheralConnection:';
    procedure registerForConnectionEventsWithOptions (options: NSDictionary); message 'registerForConnectionEventsWithOptions:'; { available in 13_0 }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  CBCentralManagerDelegateProtocol = objcprotocol external name 'CBCentralManagerDelegate' (NSObjectProtocol)
  required
    procedure centralManagerDidUpdateState (central: CBCentralManager); message 'centralManagerDidUpdateState:';
  optional
    procedure centralManager_willRestoreState (central: CBCentralManager; dict: NSDictionary); message 'centralManager:willRestoreState:';
    procedure centralManager_didDiscoverPeripheral_advertisementData_RSSI (central: CBCentralManager; peripheral: CBPeripheral; advertisementData: NSDictionary; RSSI: NSNumber); message 'centralManager:didDiscoverPeripheral:advertisementData:RSSI:';
    procedure centralManager_didConnectPeripheral (central: CBCentralManager; peripheral: CBPeripheral); message 'centralManager:didConnectPeripheral:';
    procedure centralManager_didFailToConnectPeripheral_error (central: CBCentralManager; peripheral: CBPeripheral; error: NSError); message 'centralManager:didFailToConnectPeripheral:error:';
    procedure centralManager_didDisconnectPeripheral_error (central: CBCentralManager; peripheral: CBPeripheral; error: NSError); message 'centralManager:didDisconnectPeripheral:error:';
    procedure centralManager_connectionEventDidOccur_forPeripheral (central: CBCentralManager; event: CBConnectionEvent; peripheral: CBPeripheral); message 'centralManager:connectionEventDidOccur:forPeripheral:'; { available in 13_0 }
    procedure centralManager_didUpdateANCSAuthorizationForPeripheral (central: CBCentralManager; peripheral: CBPeripheral); message 'centralManager:didUpdateANCSAuthorizationForPeripheral:'; { available in 13_0 }
  end;
{$endif}

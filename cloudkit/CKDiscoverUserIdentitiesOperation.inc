{ Parsed from CloudKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CloudKit.framework/Headers/CKDiscoverUserIdentitiesOperation.h }

{$ifdef CALLBACKS}
type
  CKDiscoverUserIdentitiesOperationUserIdentityDiscoveredBlockCallback = reference to function (identity: CKUserIdentity; lookupInfo: CKUserIdentityLookupInfo): pointer; cblock; cdecl;
  CKDiscoverUserIdentitiesOperationDiscoverUserIdentitiesCompletionBlockCallback = reference to function (operationError: NSError): pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  CKDiscoverUserIdentitiesOperationPtr = ^CKDiscoverUserIdentitiesOperation;
{$endif}

{$ifdef CLASSES}

type
  CKDiscoverUserIdentitiesOperation = objcclass external (CKOperation)
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithUserIdentityLookupInfos (userIdentityLookupInfos: NSArray): id; message 'initWithUserIdentityLookupInfos:';
    procedure setUserIdentityLookupInfos(newValue: NSArray); message 'setUserIdentityLookupInfos:';
    function userIdentityLookupInfos: NSArray; message 'userIdentityLookupInfos';
    procedure setUserIdentityDiscoveredBlock(newValue: CKDiscoverUserIdentitiesOperationUserIdentityDiscoveredBlockCallback); message 'setUserIdentityDiscoveredBlock:';
    function userIdentityDiscoveredBlock: CKDiscoverUserIdentitiesOperationUserIdentityDiscoveredBlockCallback; message 'userIdentityDiscoveredBlock';
    procedure setDiscoverUserIdentitiesCompletionBlock(newValue: CKDiscoverUserIdentitiesOperationDiscoverUserIdentitiesCompletionBlockCallback); message 'setDiscoverUserIdentitiesCompletionBlock:';
    function discoverUserIdentitiesCompletionBlock: CKDiscoverUserIdentitiesOperationDiscoverUserIdentitiesCompletionBlockCallback; message 'discoverUserIdentitiesCompletionBlock';
  end;
{$endif}

{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/WKWebsiteDataStore.h }

{$ifdef CALLBACKS}
type
  WKWebsiteDataStoreFetchDataRecordsOfTypesCallback = reference to function (param1: NSArray): pointer; cblock; cdecl;
  WKWebsiteDataStoreRemoveDataOfTypesCallback = reference to function : pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  WKWebsiteDataStorePtr = ^WKWebsiteDataStore;
{$endif}

{$ifdef CLASSES}

type
  WKWebsiteDataStore = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    class function defaultDataStore: WKWebsiteDataStore; message 'defaultDataStore';
    class function nonPersistentDataStore: WKWebsiteDataStore; message 'nonPersistentDataStore';
    function new_: id; message 'new';
    function init: id; message 'init';
    function isPersistent: objcbool; message 'isPersistent';
    class function allWebsiteDataTypes: NSSet; message 'allWebsiteDataTypes';
    procedure fetchDataRecordsOfTypes_completionHandler (dataTypes: NSSet; completionHandler: WKWebsiteDataStoreFetchDataRecordsOfTypesCallback); message 'fetchDataRecordsOfTypes:completionHandler:';
    procedure removeDataOfTypes_forDataRecords_completionHandler (dataTypes: NSSet; dataRecords: NSArray; completionHandler: WKWebsiteDataStoreRemoveDataOfTypesCallback); message 'removeDataOfTypes:forDataRecords:completionHandler:';
    procedure removeDataOfTypes_modifiedSince_completionHandler (dataTypes: NSSet; date: NSDate; completionHandler: WKWebsiteDataStoreRemoveDataOfTypesCallback); message 'removeDataOfTypes:modifiedSince:completionHandler:';
    function httpCookieStore: WKHTTPCookieStore; message 'httpCookieStore'; { available in macos , ios  }

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{ Parsed from CloudKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CloudKit.framework/Headers/CKFetchShareMetadataOperation.h }

{$ifdef CALLBACKS}
type
  CKFetchShareMetadataOperationPerShareMetadataBlockCallback = reference to function (shareURL: NSURL; shareMetadata: CKShareMetadata; error: NSError): pointer; cblock; cdecl;
  CKFetchShareMetadataOperationFetchShareMetadataCompletionBlockCallback = reference to function (operationError: NSError): pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  CKFetchShareMetadataOperationPtr = ^CKFetchShareMetadataOperation;
{$endif}

{$ifdef CLASSES}

type
  CKFetchShareMetadataOperation = objcclass external (CKOperation)
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithShareURLs (shareURLs: NSArray): id; message 'initWithShareURLs:';
    procedure setShareURLs(newValue: NSArray); message 'setShareURLs:';
    function shareURLs: NSArray; message 'shareURLs';
    procedure setShouldFetchRootRecord(newValue: objcbool); message 'setShouldFetchRootRecord:';
    function shouldFetchRootRecord: objcbool; message 'shouldFetchRootRecord';
    procedure setRootRecordDesiredKeys(newValue: NSArray); message 'setRootRecordDesiredKeys:';
    function rootRecordDesiredKeys: NSArray; message 'rootRecordDesiredKeys';
    procedure setPerShareMetadataBlock(newValue: CKFetchShareMetadataOperationPerShareMetadataBlockCallback); message 'setPerShareMetadataBlock:';
    function perShareMetadataBlock: CKFetchShareMetadataOperationPerShareMetadataBlockCallback; message 'perShareMetadataBlock';
    procedure setFetchShareMetadataCompletionBlock(newValue: CKFetchShareMetadataOperationFetchShareMetadataCompletionBlockCallback); message 'setFetchShareMetadataCompletionBlock:';
    function fetchShareMetadataCompletionBlock: CKFetchShareMetadataOperationFetchShareMetadataCompletionBlockCallback; message 'fetchShareMetadataCompletionBlock';
  end;
{$endif}

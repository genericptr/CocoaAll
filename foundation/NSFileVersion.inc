{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSFileVersion.h }

{$ifdef CALLBACKS}
type
  NSFileVersionGetNonlocalVersionsOfItemAtURLCallback = reference to function (nonlocalFileVersions: NSArray; error: NSError): pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSFileVersionPtr = ^NSFileVersion;
{$endif}

{$ifdef TYPES}
type
  NSFileVersionAddingOptions = NSUInteger;
  NSFileVersionAddingOptionsPtr = ^NSFileVersionAddingOptions;

const
  NSFileVersionAddingByMoving = 1 shl 0;

type
  NSFileVersionReplacingOptions = NSUInteger;
  NSFileVersionReplacingOptionsPtr = ^NSFileVersionReplacingOptions;

const
  NSFileVersionReplacingByMoving = 1 shl 0;
{$endif}

{$ifdef CLASSES}

type
  NSFileVersion = objcclass external (NSObject)
  private
    _fileURL: NSURL;
    _addition: id;
    _deadVersionIdentifier: id;
    _nonLocalVersion: id;
    _contentsURL: NSURL;
    _isBackup: objcbool;
    _localizedName: NSString;
    _localizedComputerName: NSString;
    _modificationDate: NSDate;
    _isResolved: objcbool;
    _contentsURLIsAccessed: objcbool;
    _reserved: id;
    _name: NSString;
  public
    class function currentVersionOfItemAtURL (url: NSURL): NSFileVersion; message 'currentVersionOfItemAtURL:';
    class function otherVersionsOfItemAtURL (url: NSURL): NSArray; message 'otherVersionsOfItemAtURL:';
    class function unresolvedConflictVersionsOfItemAtURL (url: NSURL): NSArray; message 'unresolvedConflictVersionsOfItemAtURL:';
    class procedure getNonlocalVersionsOfItemAtURL_completionHandler (url: NSURL; completionHandler: NSFileVersionGetNonlocalVersionsOfItemAtURLCallback); message 'getNonlocalVersionsOfItemAtURL:completionHandler:'; { available in macos , ios , watchos , tvos  }
    class function versionOfItemAtURL_forPersistentIdentifier (url: NSURL; persistentIdentifier: id): NSFileVersion; message 'versionOfItemAtURL:forPersistentIdentifier:';
    class function addVersionOfItemAtURL_withContentsOfURL_options_error (url: NSURL; contentsURL: NSURL; options: NSFileVersionAddingOptions; outError: NSErrorPtr): NSFileVersion; message 'addVersionOfItemAtURL:withContentsOfURL:options:error:'; { unavailable in ios, watchos, tvos }
    class function temporaryDirectoryURLForNewVersionOfItemAtURL (url: NSURL): NSURL; message 'temporaryDirectoryURLForNewVersionOfItemAtURL:'; { unavailable in ios, watchos, tvos }
    function URL: NSURL; message 'URL';
    function localizedName: NSString; message 'localizedName';
    function localizedNameOfSavingComputer: NSString; message 'localizedNameOfSavingComputer';
    function originatorNameComponents: NSPersonNameComponents; message 'originatorNameComponents'; { unavailable in watchos, tvos }
    function modificationDate: NSDate; message 'modificationDate';
    function persistentIdentifier: id; message 'persistentIdentifier';
    function isConflict: objcbool; message 'isConflict';
    procedure setResolved(newValue: objcbool); message 'setResolved:';
    function isResolved: objcbool; message 'isResolved';
    procedure setDiscardable(newValue: objcbool); message 'setDiscardable:'; { unavailable in ios, watchos, tvos }
    function isDiscardable: objcbool; message 'isDiscardable'; { unavailable in ios, watchos, tvos }
    function hasLocalContents: objcbool; message 'hasLocalContents'; { available in macos , ios , watchos , tvos  }
    function hasThumbnail: objcbool; message 'hasThumbnail'; { available in macos , ios , watchos , tvos  }
    function replaceItemAtURL_options_error (url_: NSURL; options: NSFileVersionReplacingOptions; error: NSErrorPtr): NSURL; message 'replaceItemAtURL:options:error:';
    function removeAndReturnError (outError: NSErrorPtr): objcbool; message 'removeAndReturnError:';
    class function removeOtherVersionsOfItemAtURL_error (url_: NSURL; outError: NSErrorPtr): objcbool; message 'removeOtherVersionsOfItemAtURL:error:';
  end;
{$endif}

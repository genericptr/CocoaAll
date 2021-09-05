{ Parsed from PubSub.framework PSEntry.h }


{$ifdef TYPES}
type
  PSEntryPtr = ^PSEntry;
{$endif}

{$if (MAC_OS_X_VERSION_10_5 <= MAC_OS_X_VERSION_MAX_ALLOWED)}
{$ifdef CLASSES}

type
  PSEntry = objcclass external (NSObject)
  private
    _internal: id;
  public
    function feed: PSFeed; message 'feed';
    function identifier: NSString; message 'identifier';
    function title: NSString; message 'title';
    function rights: NSString; message 'rights';
    function content: PSContent; message 'content';
    function summary: PSContent; message 'summary';
    function dateUpdated: NSDate; message 'dateUpdated';
    function timeZoneUpdated: NSTimeZone; message 'timeZoneUpdated';
    function datePublished: NSDate; message 'datePublished';
    function timeZonePublished: NSTimeZone; message 'timeZonePublished';
    function dateCreated: NSDate; message 'dateCreated';
    function timeZoneCreated: NSTimeZone; message 'timeZoneCreated';
    function dateForDisplay: NSDate; message 'dateForDisplay';
    function baseURL: NSURL; message 'baseURL';
    function alternateURL: NSURL; message 'alternateURL';
    function authors: NSArray; message 'authors';
    function contributors: NSArray; message 'contributors';
    function enclosures: NSArray; message 'enclosures';
    function isCurrent: objcbool; message 'isCurrent';
    procedure setRead(newValue: objcbool); message 'setRead:';
    function isRead: objcbool; message 'isRead';
    procedure setFlagged(newValue: objcbool); message 'setFlagged:';
    function isFlagged: objcbool; message 'isFlagged';
    function localDateCreated: NSDate; message 'localDateCreated';
    function localDateUpdated: NSDate; message 'localDateUpdated';
    function titleForDisplay: NSString; message 'titleForDisplay';
    function authorsForDisplay: NSString; message 'authorsForDisplay';
    function XMLRepresentation: NSXMLElement; message 'XMLRepresentation';
    function extensionXMLElementsUsingNamespace (nameSpace: NSString): NSArray; message 'extensionXMLElementsUsingNamespace:';
  end;
{$endif}

{$endif}

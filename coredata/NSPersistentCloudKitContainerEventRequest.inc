{ Parsed from CoreData.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreData.framework/Headers/NSPersistentCloudKitContainerEventRequest.h }

{$ifdef TYPES}
type
  NSPersistentCloudKitContainerEventRequestPtr = ^NSPersistentCloudKitContainerEventRequest;
{$endif}

{$ifdef CLASSES}

type
  NSPersistentCloudKitContainerEventRequest = objcclass external (NSPersistentStoreRequest)
  public
    procedure setResultType(newValue: NSPersistentCloudKitContainerEventResultType); message 'setResultType:';
    function resultType: NSPersistentCloudKitContainerEventResultType; message 'resultType';
    class function fetchEventsAfterDate (date: NSDate): id; message 'fetchEventsAfterDate:';
    class function fetchEventsAfterEvent (event: NSPersistentCloudKitContainerEvent): id; message 'fetchEventsAfterEvent:';
    class function fetchEventsMatchingFetchRequest (fetchRequest: NSFetchRequest): id; message 'fetchEventsMatchingFetchRequest:';
    class function fetchRequestForEvents: NSFetchRequest; message 'fetchRequestForEvents';
  end;
{$endif}

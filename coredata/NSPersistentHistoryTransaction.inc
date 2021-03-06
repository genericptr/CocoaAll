{ Parsed from CoreData.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreData.framework/Headers/NSPersistentHistoryTransaction.h }

{$ifdef TYPES}
type
  NSPersistentHistoryTransactionPtr = ^NSPersistentHistoryTransaction;
{$endif}

{$ifdef CLASSES}

type
  NSPersistentHistoryTransaction = objcclass external (NSObject, NSCopyingProtocol)
  public
    class function entityDescriptionWithContext (context: NSManagedObjectContext): NSEntityDescription; message 'entityDescriptionWithContext:'; { available in macosx ,ios ,tvos ,watchos  }
    class function entityDescription: NSEntityDescription; message 'entityDescription'; { available in macosx ,ios ,tvos ,watchos  }
    class function fetchRequest: NSFetchRequest; message 'fetchRequest'; { available in macosx ,ios ,tvos ,watchos  }
    function timestamp: NSDate; message 'timestamp';
    function changes: NSArray; message 'changes';
    function transactionNumber: cint64; message 'transactionNumber';
    function storeID: NSString; message 'storeID';
    function bundleID: NSString; message 'bundleID';
    function processID: NSString; message 'processID';
    function contextName: NSString; message 'contextName';
    function author: NSString; message 'author';
    function token: NSPersistentHistoryToken; message 'token';
    function objectIDNotification: NSNotification; message 'objectIDNotification';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}


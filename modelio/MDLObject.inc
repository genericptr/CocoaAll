{ Parsed from ModelIO.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/ModelIO.framework/Headers/MDLObject.h }

{$ifdef CALLBACKS}
type
  MDLObjectEnumerateChildObjectsOfClassCallback = reference to function (object_: MDLObject; stop: objcboolPtr): pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  MDLObjectPtr = ^MDLObject;
  MDLObjectContainerPtr = ^MDLObjectContainer;
{$endif}

{$ifdef CLASSES}

type
  MDLObject = objcclass external (NSObject, MDLNamedProtocol)
  public
    function components: NSArray; message 'components';
    procedure setComponent_forProtocol (component: id; protocol_: Protocol); message 'setComponent:forProtocol:';
    function componentConformingToProtocol (protocol_: Protocol): id; message 'componentConformingToProtocol:';
    function objectForKeyedSubscript (key: Protocol): id; message 'objectForKeyedSubscript:';
    procedure setObject_forKeyedSubscript (obj: id; key: Protocol); message 'setObject:forKeyedSubscript:';
    procedure setParent(newValue: MDLObject); message 'setParent:';
    function parent: MDLObject; message 'parent';
    procedure setInstance(newValue: MDLObject); message 'setInstance:';
    function instance: MDLObject; message 'instance';
    function path: NSString; message 'path';
    function objectAtPath (path_: NSString): MDLObject; message 'objectAtPath:';
    procedure enumerateChildObjectsOfClass_root_usingBlock_stopPointer (objectClass: pobjc_class; root: MDLObject; block: MDLObjectEnumerateChildObjectsOfClassCallback; stopPointer: objcboolPtr); message 'enumerateChildObjectsOfClass:root:usingBlock:stopPointer:'; { available in macos , ios , tvos  }
    procedure setTransform(newValue: id); message 'setTransform:';
    function transform: id; message 'transform';
    procedure setChildren(newValue: id); message 'setChildren:';
    function children: id; message 'children';
    procedure setHidden(newValue: objcbool); message 'setHidden:';
    function hidden: objcbool; message 'hidden';
    procedure addChild (child: MDLObject); message 'addChild:';
    function boundingBoxAtTime (time: NSTimeInterval): MDLAxisAlignedBoundingBox; message 'boundingBoxAtTime:';

    { Adopted protocols }
    function name: NSString; message 'name';
    procedure setName (newValue: NSString); message 'setName:';
  end;

type
  MDLObjectContainer = objcclass external (NSObject, MDLObjectContainerComponentProtocol)

    { Adopted protocols }
    procedure addObject (object_: MDLObject); message 'addObject:';
    function count: NSUInteger; message 'count'; { available in macos , ios , tvos  }
    function countByEnumeratingWithState_objects_count (state: NSFastEnumerationStatePtr; buffer: idPtr { variable size array of id }; len: NSUInteger): NSUInteger; message 'countByEnumeratingWithState:objects:count:';
    function objectAtIndexedSubscript (index: NSUInteger): MDLObject; message 'objectAtIndexedSubscript:'; { available in macos , ios , tvos  }
    function objects: NSArray; message 'objects';
    procedure removeObject (object_: MDLObject); message 'removeObject:';
  end;
{$endif}

{ Parsed from SpriteKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/SpriteKit.framework/Headers/SKTileMapNode.h }

{$ifdef TYPES}
type
  SKTileMapNodePtr = ^SKTileMapNode;
{$endif}

{$ifdef CLASSES}

type
  SKTileMapNode = objcclass external (SKNode, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function tileMapNodeWithTileSet_columns_rows_tileSize (tileSet: SKTileSet; columns: NSUInteger; rows: NSUInteger; tileSize: CGSize): id; message 'tileMapNodeWithTileSet:columns:rows:tileSize:';
    class function tileMapNodeWithTileSet_columns_rows_tileSize_fillWithTileGroup (tileSet: SKTileSet; columns: NSUInteger; rows: NSUInteger; tileSize: CGSize; tileGroup: SKTileGroup): id; message 'tileMapNodeWithTileSet:columns:rows:tileSize:fillWithTileGroup:';
    class function tileMapNodeWithTileSet_columns_rows_tileSize_tileGroupLayout (tileSet: SKTileSet; columns: NSUInteger; rows: NSUInteger; tileSize: CGSize; tileGroupLayout: NSArray): id; message 'tileMapNodeWithTileSet:columns:rows:tileSize:tileGroupLayout:';
    function initWithTileSet_columns_rows_tileSize (tileSet: SKTileSet; columns: NSUInteger; rows: NSUInteger; tileSize: CGSize): id; message 'initWithTileSet:columns:rows:tileSize:';
    function initWithTileSet_columns_rows_tileSize_fillWithTileGroup (tileSet: SKTileSet; columns: NSUInteger; rows: NSUInteger; tileSize: CGSize; tileGroup: SKTileGroup): id; message 'initWithTileSet:columns:rows:tileSize:fillWithTileGroup:';
    function initWithTileSet_columns_rows_tileSize_tileGroupLayout (tileSet: SKTileSet; columns: NSUInteger; rows: NSUInteger; tileSize: CGSize; tileGroupLayout: NSArray): id; message 'initWithTileSet:columns:rows:tileSize:tileGroupLayout:';
    procedure setNumberOfColumns(newValue: NSUInteger); message 'setNumberOfColumns:';
    function numberOfColumns: NSUInteger; message 'numberOfColumns';
    procedure setNumberOfRows(newValue: NSUInteger); message 'setNumberOfRows:';
    function numberOfRows: NSUInteger; message 'numberOfRows';
    procedure setTileSize(newValue: CGSize); message 'setTileSize:';
    function tileSize: CGSize; message 'tileSize';
    function mapSize: CGSize; message 'mapSize';
    procedure setTileSet(newValue: SKTileSet); message 'setTileSet:';
    function tileSet: SKTileSet; message 'tileSet';
    procedure setColorBlendFactor(newValue: CGFloat); message 'setColorBlendFactor:';
    function colorBlendFactor: CGFloat; message 'colorBlendFactor';
    procedure setColor(newValue: SKColor); message 'setColor:';
    function color: SKColor; message 'color';
    procedure setBlendMode(newValue: SKBlendMode); message 'setBlendMode:';
    function blendMode: SKBlendMode; message 'blendMode';
    procedure setAnchorPoint(newValue: CGPoint); message 'setAnchorPoint:';
    function anchorPoint: CGPoint; message 'anchorPoint';
    procedure setShader(newValue: SKShader); message 'setShader:';
    function shader: SKShader; message 'shader';
    procedure setAttributeValues(newValue: NSDictionary); message 'setAttributeValues:'; { available in ios , tvos , watchos , macos  }
    function attributeValues: NSDictionary; message 'attributeValues'; { available in ios , tvos , watchos , macos  }
    function valueForAttributeNamed (key: NSString): SKAttributeValue; message 'valueForAttributeNamed:'; { available in ios , tvos , watchos , macos  }
    procedure setValue_forAttributeNamed (value: SKAttributeValue; key: NSString); message 'setValue:forAttributeNamed:';
    procedure setLightingBitMask(newValue: cuint32); message 'setLightingBitMask:';
    function lightingBitMask: cuint32; message 'lightingBitMask';
    procedure setEnableAutomapping(newValue: objcbool); message 'setEnableAutomapping:';
    function enableAutomapping: objcbool; message 'enableAutomapping';
    procedure fillWithTileGroup (tileGroup: SKTileGroup); message 'fillWithTileGroup:';
    function tileDefinitionAtColumn_row (column: NSUInteger; row: NSUInteger): SKTileDefinition; message 'tileDefinitionAtColumn:row:';
    function tileGroupAtColumn_row (column: NSUInteger; row: NSUInteger): SKTileGroup; message 'tileGroupAtColumn:row:';
    procedure setTileGroup_forColumn_row (tileGroup: SKTileGroup; column: NSUInteger; row: NSUInteger); message 'setTileGroup:forColumn:row:';
    procedure setTileGroup_andTileDefinition_forColumn_row (tileGroup: SKTileGroup; tileDefinition: SKTileDefinition; column: NSUInteger; row: NSUInteger); message 'setTileGroup:andTileDefinition:forColumn:row:';
    function tileColumnIndexFromPosition (position_: CGPoint): NSUInteger; message 'tileColumnIndexFromPosition:';
    function tileRowIndexFromPosition (position_: CGPoint): NSUInteger; message 'tileRowIndexFromPosition:';
    function centerOfTileAtColumn_row (column: NSUInteger; row: NSUInteger): CGPoint; message 'centerOfTileAtColumn:row:';
  end;
{$endif}


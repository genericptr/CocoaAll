{ Parsed from CoreImage.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreImage.framework/Headers/CIFilterShape.h }

{$ifdef TYPES}
type
  CIFilterShapePtr = ^CIFilterShape;
{$endif}

{$ifdef CLASSES}

type
  CIFilterShape = objcclass external (NSObject, NSCopyingProtocol)
  private
    _pad: cuint32;
    _priv: pointer;
  public
    class function shapeWithRect (r: CGRect): id; message 'shapeWithRect:';
    function initWithRect (r: CGRect): id; message 'initWithRect:';
    function transformBy_interior (m: CGAffineTransform; flag: objcbool): CIFilterShape; message 'transformBy:interior:';
    function insetByX_Y (dx: cint; dy: cint): CIFilterShape; message 'insetByX:Y:';
    function unionWith (s2: CIFilterShape): CIFilterShape; message 'unionWith:';
    function unionWithRect (r: CGRect): CIFilterShape; message 'unionWithRect:';
    function intersectWith (s2: CIFilterShape): CIFilterShape; message 'intersectWith:';
    function intersectWithRect (r: CGRect): CIFilterShape; message 'intersectWithRect:';
    function extent: CGRect; message 'extent';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{ Parsed from MapKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MapKit.framework/Headers/MKMultiPolygon.h }

{$ifdef TYPES}
type
  MKMultiPolygonPtr = ^MKMultiPolygon;
{$endif}

{$ifdef CLASSES}

type
  MKMultiPolygon = objcclass external (MKShape, MKOverlayProtocol)
  public
    function initWithPolygons (polygons: NSArray): id; message 'initWithPolygons:'; { NS_DESIGNATED_INITIALIZER }
    function polygons: NSArray; message 'polygons';

    { Adopted protocols }
    function boundingMapRect: MKMapRect; message 'boundingMapRect';
    function canReplaceMapContent: objcbool; message 'canReplaceMapContent'; { available in 10_9, 7_0 }
    function intersectsMapRect (mapRect: MKMapRect): objcbool; message 'intersectsMapRect:';
  end;
{$endif}


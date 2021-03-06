{ Parsed from CoreML.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreML.framework/Headers/MLModelDescription.h }

{$ifdef TYPES}
type
  MLModelDescriptionPtr = ^MLModelDescription;
{$endif}

{$ifdef CLASSES}

type
  MLModelDescription = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function inputDescriptionsByName: NSDictionary; message 'inputDescriptionsByName';
    function outputDescriptionsByName: NSDictionary; message 'outputDescriptionsByName';
    function predictedFeatureName: NSString; message 'predictedFeatureName';
    function predictedProbabilitiesName: NSString; message 'predictedProbabilitiesName';
    function metadata: NSDictionary; message 'metadata';
    function classLabels: NSArray; message 'classLabels'; { available in macos , ios , watchos , tvos  }

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;


type
  MLUpdateAdditions = objccategory external (MLModelDescription)
    function isUpdatable: objcbool; message 'isUpdatable';
    function trainingInputDescriptionsByName: NSDictionary; message 'trainingInputDescriptionsByName';
  end;

type
  MLParameters = objccategory external (MLModelDescription)
    function parameterDescriptionsByKey: NSDictionary; message 'parameterDescriptionsByKey';
  end;
{$endif}


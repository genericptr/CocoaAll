{ Parsed from SecurityInterface.framework SFCertificateView.h }


{$ifdef TYPES}
type
  SFCertificateViewPtr = ^SFCertificateView;
{$endif}

{$ifndef _SFCERTIFICATEVIEW_H_}
{$ifdef CLASSES}

type
  SFCertificateView = objcclass external (NSView)
  private
    _reserved_SFCertificateView: id;
  public
    procedure setCertificate (certificate: SecCertificateRef); message 'setCertificate:';
    function certificate: SecCertificateRef; message 'certificate';
    procedure setPolicies (policies: id); message 'setPolicies:';
    function policies: NSArray; message 'policies';
    procedure setEditableTrust (editable: objcbool); message 'setEditableTrust:';
    function isEditable: objcbool; message 'isEditable';
    procedure setDisplayTrust (display: objcbool); message 'setDisplayTrust:';
    function isTrustDisplayed: objcbool; message 'isTrustDisplayed';
    procedure saveTrustSettings; message 'saveTrustSettings';
    procedure setDisplayDetails (display: objcbool); message 'setDisplayDetails:';
    function detailsDisplayed: objcbool; message 'detailsDisplayed';
    procedure setDetailsDisclosed (disclosed: objcbool); message 'setDetailsDisclosed:';
    function detailsDisclosed: objcbool; message 'detailsDisclosed';
    procedure setPoliciesDisclosed (disclosed: objcbool); message 'setPoliciesDisclosed:';
    function policiesDisclosed: objcbool; message 'policiesDisclosed';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SFCertificateViewDisclosureStateDidChange: NSString; cvar; external;
{$endif}

{$endif}

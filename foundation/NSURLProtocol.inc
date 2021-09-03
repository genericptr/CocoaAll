{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSURLProtocol.h }

{$ifdef TYPES}
type
  NSURLProtocolPtr = ^NSURLProtocol;
  NSURLProtocolClientProtocolPtr = ^NSURLProtocolClientProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  NSURLProtocolClientProtocol = objcprotocol external name 'NSURLProtocolClient' (NSObjectProtocol)
    procedure URLProtocol_wasRedirectedToRequest_redirectResponse (protocol: NSURLProtocol; request: NSURLRequest; redirectResponse: NSURLResponse); message 'URLProtocol:wasRedirectedToRequest:redirectResponse:';
    procedure URLProtocol_cachedResponseIsValid (protocol: NSURLProtocol; cachedResponse: NSCachedURLResponse); message 'URLProtocol:cachedResponseIsValid:';
    procedure URLProtocol_didReceiveResponse_cacheStoragePolicy (protocol: NSURLProtocol; response: NSURLResponse; policy: NSURLCacheStoragePolicy); message 'URLProtocol:didReceiveResponse:cacheStoragePolicy:';
    procedure URLProtocol_didLoadData (protocol: NSURLProtocol; data: NSData); message 'URLProtocol:didLoadData:';
    procedure URLProtocolDidFinishLoading (protocol: NSURLProtocol); message 'URLProtocolDidFinishLoading:';
    procedure URLProtocol_didFailWithError (protocol: NSURLProtocol; error: NSError); message 'URLProtocol:didFailWithError:';
    procedure URLProtocol_didReceiveAuthenticationChallenge (protocol: NSURLProtocol; challenge: NSURLAuthenticationChallenge); message 'URLProtocol:didReceiveAuthenticationChallenge:';
    procedure URLProtocol_didCancelAuthenticationChallenge (protocol: NSURLProtocol; challenge: NSURLAuthenticationChallenge); message 'URLProtocol:didCancelAuthenticationChallenge:';
  end;
{$endif}

{$ifdef CLASSES}

type
  NSURLProtocol = objcclass external (NSObject)
  private
    _internal: NSURLProtocolInternal;
  public
    function initWithRequest_cachedResponse_client (request: NSURLRequest; cachedResponse: NSCachedURLResponse; client: id): id; message 'initWithRequest:cachedResponse:client:'; { NS_DESIGNATED_INITIALIZER }
    function client: id; message 'client';
    function request: NSURLRequest; message 'request';
    function cachedResponse: NSCachedURLResponse; message 'cachedResponse';
    class function canInitWithRequest (request_: NSURLRequest): objcbool; message 'canInitWithRequest:';
    class function canonicalRequestForRequest (request_: NSURLRequest): NSURLRequest; message 'canonicalRequestForRequest:';
    class function requestIsCacheEquivalent_toRequest (a: NSURLRequest; b: NSURLRequest): objcbool; message 'requestIsCacheEquivalent:toRequest:';
    procedure startLoading; message 'startLoading';
    procedure stopLoading; message 'stopLoading';
    class function propertyForKey_inRequest (key: NSString; request_: NSURLRequest): id; message 'propertyForKey:inRequest:';
    class procedure setProperty_forKey_inRequest (value: id; key: NSString; request_: NSMutableURLRequest); message 'setProperty:forKey:inRequest:';
    class procedure removePropertyForKey_inRequest (key: NSString; request_: NSMutableURLRequest); message 'removePropertyForKey:inRequest:';
    class function registerClass (protocolClass: pobjc_class): objcbool; message 'registerClass:';
    class procedure unregisterClass (protocolClass: pobjc_class); message 'unregisterClass:';
  end;


type
  NSURLSessionTaskAdditions = objccategory external (NSURLProtocol)
    class function canInitWithTask (task: NSURLSessionTask): objcbool; message 'canInitWithTask:'; { available in macos , ios , watchos , tvos  }
    function initWithTask_cachedResponse_client (task: NSURLSessionTask; cachedResponse_: NSCachedURLResponse; client_: id): id; message 'initWithTask:cachedResponse:client:'; { available in macos , ios , watchos , tvos  }
    function task: NSURLSessionTask; message 'task'; { available in macos , ios , watchos , tvos  }
  end;
{$endif}

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying.h"
#import "NSURLConnectionDelegate.h"

@class NSError, NSMutableData, NSString, NSURLConnection, NSURLResponse;

@interface CSRemoteServiceClient : NSObject <NSCopying, NSURLConnectionDelegate>
{
    NSString *serverAddress;
    int serverPort;
    NSString *secureServerPath;
    NSString *secureServerAddress;
    int secureServerPort;
    NSString *serverPath;
    NSMutableData *asyncReceivedData;
    NSURLConnection *asyncConnection;
    NSError *asyncError;
    NSURLResponse *asyncResponse;
    unsigned long long asyncRequestEncoding;
    BOOL asyncRequestPending;
    NSString *identityName;
    struct OpaqueSecIdentityRef *identity;
    double _timeout;
}

+ (void)initialize;
@property double timeout; // @synthesize timeout=_timeout;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)_executeRequest:(id)arg1 withTimeout:(double)arg2;
- (id)executeBatchRequest:(id)arg1;
- (void)executeAsyncBatchRequest:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)executeRequest:(id)arg1;
- (void)executeAsyncRequest:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithServerAddress:(id)arg1 andPort:(int)arg2 andPath:(id)arg3;

@end

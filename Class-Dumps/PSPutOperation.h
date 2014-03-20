//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PubSub/PSOperation.h>

@class NSArray, NSData;

__attribute__((visibility("hidden")))
@interface PSPutOperation : PSOperation
{
    NSArray *_messages;
    BOOL _isPageFlip;
}

@property BOOL isPageFlip; // @synthesize isPageFlip=_isPageFlip;
@property(copy) NSArray *messages; // @synthesize messages=_messages;
- (void)_gotResponse;
@property(readonly) NSData *requestData;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 URL:(id)arg3 eTag:(id)arg4 start:(unsigned int)arg5 data:(id)arg6;

@end

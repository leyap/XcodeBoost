//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ABLocking.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ABBinarySemaphoreLock : NSObject <ABLocking>
{
    struct dispatch_semaphore_s *_semaphore;
    NSString *_name;
}

@property(copy) NSString *name; // @synthesize name=_name;
- (id)description;
- (void)unlock;
- (void)lock;
- (void)invalidate;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

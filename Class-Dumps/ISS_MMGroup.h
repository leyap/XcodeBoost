//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ISS_MMPrincipal.h"
#import "ISS_MMTransactionGenerator.h"

@class NSString;

@interface ISS_MMGroup : NSObject <ISS_MMPrincipal, ISS_MMTransactionGenerator>
{
    NSString *_name;
    id _owner;
    id _delegate;
    BOOL _use_synchronous;
    NSString *_principalID;
}

+ (id)principalIDWithName:(id)arg1 andOwner:(id)arg2;
+ (id)groupWithName:(id)arg1 andOwner:(id)arg2;
- (id)principalID;
- (BOOL)isSynchronous;
- (void)setIsSynchronous:(BOOL)arg1;
- (id)transactionDelegate;
- (void)setTransactionDelegate:(id)arg1;
- (id)members;
- (id)removeMembers:(id)arg1;
- (id)addMembers:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 andOwner:(id)arg2;
- (void)setOwnerAccount:(id)arg1;
- (id)ownerAccount;
- (id)owner;
- (void)setName:(id)arg1;
- (id)name;

@end

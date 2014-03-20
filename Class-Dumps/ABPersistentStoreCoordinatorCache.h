//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABPersistentStoreCoordinatorFactory, NSMutableDictionary, NSString;

@interface ABPersistentStoreCoordinatorCache : NSObject
{
    id <ABAccountCollection> _accountCollection;
    BOOL _readOnly;
    NSMutableDictionary *_cache;
    ABPersistentStoreCoordinatorFactory *_coordinatorFactory;
    BOOL _isPristine;
}

+ (id)sharedInstance;
@property(readonly, getter=isReadOnly) BOOL readOnly; // @synthesize readOnly=_readOnly;
@property(readonly) id <ABAccountCollection> accountCollection; // @synthesize accountCollection=_accountCollection;
- (id)scopeAccountUrls:(id)arg1 forCacheKey:(id)arg2;
- (void)updatePersistentStoresWithBuilder:(id)arg1 addedUrls:(id)arg2 removedUrls:(id)arg3 resultBlock:(CDUnknownBlockType)arg4;
- (void)updatePersistentStoresWithBuilder:(id)arg1 oldUrls:(id)arg2 newUrls:(id)arg3 resultBlock:(CDUnknownBlockType)arg4;
- (id)storeUrlsForCoordinator:(id)arg1;
- (id)updatePersistentStoresInCacheWithKey:(id)arg1 newAccounts:(id)arg2;
- (void)checkIfMainDatabaseInResultsIsPristine:(id)arg1 forCacheKey:(id)arg2;
- (void)updatePersistentStoresForAccounts:(id)arg1;
- (void)accountsDidChange:(id)arg1;
- (BOOL)addAllPersistentStoresAndReturnIsMainDatabasePristine;
- (void)startObserving;
- (id)cacheEntryWithKeyAddingIfAbsent:(id)arg1;
- (id)coordinatorKeyForStoreDescription:(id)arg1;
- (id)cacheKeyForAllSources;
- (id)cacheKeyForDatabasePath:(id)arg1;
- (id)nts_coordinatorWithDatabasePath:(id)arg1 storeDescription:(id)arg2;
- (id)coordinatorWithDatabasePath:(id)arg1 storeDescription:(id)arg2;
- (void)logInitialStoresForCoordinator:(id)arg1;
- (void)updateCacheEntry:(id)arg1 withResults:(id)arg2;
- (id)resultsFromCacheEntry:(id)arg1;
- (id)nts_coordinatorForAllSources;
- (id)coordinatorForAllSources;
- (id)basePathForAccountWithIdentifier:(id)arg1;
@property(readonly) NSString *basePath;
- (void)dealloc;
- (id)initWithAccountCollection:(id)arg1 readOnly:(BOOL)arg2;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSManagedObjectModel, NSMappingModel, NSMigrationManager, NSPersistentStoreCoordinator, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface NSStoreMigrationPolicy : NSObject
{
    NSPersistentStoreCoordinator *_coordinator;
    NSURL *_sourceURL;
    NSString *_sourceConfiguration;
    NSDictionary *_sourceOptions;
    NSManagedObjectModel *_sourceModel;
    NSDictionary *_sourceMetadata;
    NSMappingModel *_mappingModel;
    NSURL *_destinationURL;
    NSString *_destinationType;
    NSString *_destinationConfiguration;
    NSDictionary *_destinationOptions;
    NSMigrationManager *_migrationManager;
    NSArray *_resourceBundles;
    long long _workingWithSkewedSource;
    void *_reserved2;
    void *_reserved3;
    void *_reserved4;
}

+ (id)migrationStoreOptionsFromStoreOptions:(id)arg1;
+ (id)destinationURLForMigrationSourceURL:(id)arg1 createDocumentReplacementDirectory:(BOOL)arg2 error:(id *)arg3;
+ (void)setMigrationDebugLevel:(int)arg1;
+ (int)migrationDebugLevel;
- (id)migrateStoreAtURL:(id)arg1 withManager:(id)arg2 metadata:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (id)createMigrationManagerForSourceModel:(id)arg1 destinationModel:(id)arg2 error:(id *)arg3;
- (id)sourceModelForStoreAtURL:(id)arg1 metadata:(id)arg2 error:(id *)arg3;
- (id)_gatherDataAndPerformMigration:(id *)arg1;
- (id)resourceBundles;
- (void)setResourceBundles:(id)arg1;
- (id)addMigratedStoreToCoordinator:(id)arg1 withType:(id)arg2 configuration:(id)arg3 URL:(id)arg4 options:(id)arg5 error:(id *)arg6;
- (void)handleMigrationError:(id)arg1 inManager:(id)arg2;
- (void)didPerformMigrationWithManager:(id)arg1;
- (BOOL)migrateStoreAtURL:(id)arg1 toURL:(id)arg2 storeType:(id)arg3 options:(id)arg4 withManager:(id)arg5 error:(id *)arg6;
- (void)willPerformMigrationWithManager:(id)arg1;
- (id)destinationOptionsForMigration:(id)arg1 sourceMetadata:(id)arg2 error:(id *)arg3;
- (id)destinationConfigurationForMigration:(id)arg1 sourceMetadata:(id)arg2 error:(id *)arg3;
- (id)destinationTypeForMigration:(id)arg1 sourceMetadata:(id)arg2 error:(id *)arg3;
- (id)externalDataReferencesURLForDestination:(id)arg1 forStoreOfType:(id)arg2;
- (id)mappingModelForSourceModel:(id)arg1 destinationModel:(id)arg2 error:(id *)arg3;
- (void)setMigrationManager:(id)arg1;
- (id)migrationManager;
- (void)setDestinationOptions:(id)arg1;
- (id)destinationOptions;
- (void)setDestinationConfiguration:(id)arg1;
- (id)destinationConfiguration;
- (void)setDestinationType:(id)arg1;
- (id)destinationType;
- (void)setDestinationURL:(id)arg1;
- (id)destinationURL;
- (void)setMappingModel:(id)arg1;
- (id)mappingModel;
- (id)destinationModel;
- (void)setSourceModel:(id)arg1;
- (id)sourceModel;
- (void)setSourceOptions:(id)arg1;
- (id)sourceOptions;
- (void)setSourceMetadata:(id)arg1;
- (id)sourceMetadata;
- (void)setSourceConfiguration:(id)arg1;
- (id)sourceConfiguration;
- (id)sourceType;
- (void)setSourceURL:(id)arg1;
- (id)sourceURL;
- (void)setPersistentStoreCoordinator:(id)arg1;
- (id)persistentStoreCoordinator;
- (void)setPersistentStoreCoordinator:(id)arg1 sourceURL:(id)arg2 configuration:(id)arg3 metadata:(id)arg4 options:(id)arg5;
- (void)dealloc;

@end

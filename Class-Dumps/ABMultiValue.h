//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying.h"
#import "NSFastEnumeration.h"
#import "NSMutableCopying.h"

@class NSMutableArray, NSString;

@interface ABMultiValue : NSObject <NSCopying, NSMutableCopying, NSFastEnumeration>
{
    NSMutableArray *_identifiers;
    NSMutableArray *_labels;
    NSMutableArray *_values;
    NSString *_primaryIdentifier;
}

+ (id)_generateIdentifier;
+ (void)initialize;
+ (id)newWithManagedObject:(id)arg1 property:(id)arg2;
- (id)_map:(CDUnknownBlockType)arg1;
- (id)_filter:(CDUnknownBlockType)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)labelForIdentifier:(id)arg1;
- (id)_labelForIdentifier:(id)arg1;
- (id)valueForIdentifier:(id)arg1;
- (unsigned long long)_indexOfValuePassingTest:(CDUnknownBlockType)arg1;
- (unsigned long long)_indexOfSimilarValue:(id)arg1 property:(id)arg2;
- (unsigned long long)_indexOfValue:(id)arg1 property:(id)arg2;
- (unsigned long long)_indexOfValue:(id)arg1;
- (void)_setPrimaryIdentifier:(id)arg1;
- (id)_allIdentifiersWithPrimaryFirst;
- (id)_allIdentifiers;
- (id)_allValues;
- (id)_allLabels;
- (id)_initWithDictionary:(id)arg1 andValueType:(long long)arg2;
- (id)_dictionary;
- (id)_initWithIdentifiers:(id)arg1 values:(id)arg2 labels:(id)arg3 primaryIdentifier:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqual:(id)arg1 compareIdentifiers:(BOOL)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)propertyType;
- (id)primaryIdentifier;
- (id)identifierAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexForIdentifier:(id)arg1;
- (id)labelAtIndex:(unsigned long long)arg1;
- (id)valueAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (BOOL)applyToManagedObject:(id)arg1 withProperty:(id)arg2;
- (id)initWithManagedObject:(id)arg1 property:(id)arg2;
- (BOOL)containsValue:(id)arg1 forLabel:(id)arg2;

@end

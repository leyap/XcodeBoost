//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/CNPropertyDescription.h>

#import "CNAbstractPropertyDescription.h"

__attribute__((visibility("hidden")))
@interface CNDisplayStyleDescription : CNPropertyDescription <CNAbstractPropertyDescription>
{
}

- (id)flagsWithFlags:(id)arg1 displayStyle:(id)arg2;
- (id)displayStyleFromFlags:(id)arg1;
- (void)setValue:(id)arg1 onCoreDataContact:(id)arg2;
- (id)valueFromCoreDataContact:(id)arg1;
- (void)setValue:(id)arg1 onAddressBookPerson:(id)arg2;
- (id)valueFromAddressBookPerson:(id)arg1;
- (void)copyFromContact:(id)arg1 to:(id)arg2;
- (BOOL)isEqualForContact:(id)arg1 other:(id)arg2;
- (id)init;

@end

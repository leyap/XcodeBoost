//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSSharingServicePicker : NSObject
{
    id _reserved;
}

@property id <NSSharingServicePickerDelegate> delegate;
- (id)menu;
- (void)showRelativeToRect:(struct CGRect)arg1 ofView:(id)arg2 preferredEdge:(unsigned long long)arg3;
- (id)_prepareSHKSharingServicePicker;
- (void)dealloc;
- (id)initWithItems:(id)arg1;

@end

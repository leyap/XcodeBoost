//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTKit/DVTButtonTextField.h>

#import "NSTextViewDelegate.h"
#import "NSWindowDelegate.h"

@class NSFont;

@interface DVTFontTextField : DVTButtonTextField <NSTextViewDelegate, NSWindowDelegate>
{
}

+ (id)keyPathsForValuesAffectingPointSize;
+ (void)setCellClass:(Class)arg1;
+ (Class)cellClass;
- (void)bind:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (void)textDidEndEditing:(id)arg1;
- (BOOL)resignFirstResponder;
@property double pointSize;
@property(retain) NSFont *fontValue;
@property(retain) id fontRepresentation;
@property(retain) id <DVTFontTextFieldDataSource> dataSource;
- (id)cell;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonInit;

@end

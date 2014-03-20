//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSTextView.h>

@class DVTTextDocumentLocation, NSArray;

@interface DVTSliceTextView : NSTextView
{
    NSArray *_foundLocations;
    DVTTextDocumentLocation *_currentFoundLocation;
    int _findResultStyle;
}

@property int findResultStyle; // @synthesize findResultStyle=_findResultStyle;
- (void).cxx_destruct;
- (void)drawFoundLocationsInRange:(struct _NSRange)arg1;
- (id)_findResultUnderlineColor;
- (id)_findResultCurrentUnderlineColor;
- (id)_findResultGradient;
- (id)_findResultCurrentGradient;
- (void)setCurrentFoundLocation:(id)arg1;
- (void)setFoundLocations:(id)arg1;
- (void)_loadColorsFromCurrentTheme;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;

@end

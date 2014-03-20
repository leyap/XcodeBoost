//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSTypesetter.h>

@class NSArray, NSAttributedString, NSLayoutManager, NSParagraphStyle, NSTextContainer;

@interface NSATSTypesetter : NSTypesetter
{
    NSAttributedString *attributedString;
    struct _NSRange paragraphGlyphRange;
    struct _NSRange paragraphSeparatorGlyphRange;
    double lineFragmentPadding;
    NSLayoutManager *layoutManager;
    NSArray *textContainers;
    NSTextContainer *currentTextContainer;
    unsigned long long currentTextContainerIndex;
    struct CGSize currentTextContainerSize;
    NSParagraphStyle *currentParagraphStyle;
    void *_atsReserved[8];
    id _private;
}

+ (BOOL)_allowsScreenFontKerning;
+ (id)sharedTypesetter;
+ (id)sharedInstance;
+ (void)initialize;
- (struct CGRect)lineFragmentRectForProposedRect:(struct CGRect)arg1 remainingRect:(struct CGRect *)arg2;
- (CDUnion_09a75e3c *)_lineFragmentRectForProposedRectArgs;
- (CDStruct_1b12a171 *)_allocateAuxData;
- (double)baselineOffsetInLayoutManager:(id)arg1 glyphIndex:(unsigned long long)arg2;
- (struct _NSRange)layoutCharactersInRange:(struct _NSRange)arg1 forLayoutManager:(id)arg2 maximumNumberOfLineFragments:(unsigned long long)arg3;
- (void)layoutGlyphsInLayoutManager:(id)arg1 startingAtGlyphIndex:(unsigned long long)arg2 maxNumberOfLineFragments:(unsigned long long)arg3 nextGlyphIndex:(unsigned long long *)arg4;
- (unsigned int)hyphenCharacterForGlyphAtIndex:(unsigned long long)arg1;
- (float)hyphenationFactorForGlyphAtIndex:(unsigned long long)arg1;
- (unsigned long long)layoutParagraphAtPoint:(struct CGPoint *)arg1;
- (unsigned long long)actionForControlCharacterAtIndex:(unsigned long long)arg1;
- (void)endLineWithGlyphRange:(struct _NSRange)arg1;
- (void)beginLineWithGlyphAtIndex:(unsigned long long)arg1;
- (void)endParagraph;
- (void)beginParagraph;
- (unsigned long long)_sweepDirectionForGlyphAtIndex:(long long)arg1;
- (BOOL)_usesScreenFonts;
- (void)_flushCachedObjects;
- (BOOL)_layoutLineFragmentStartingWithGlyphAtIndex:(unsigned long long *)arg1 characterIndex:(unsigned long long *)arg2 atPoint:(struct CGPoint *)arg3 renderingContext:(id *)arg4;
- (void)_setForceTailTruncation:(BOOL)arg1;
- (void)_setBaselineRenderingMode:(BOOL)arg1;
- (BOOL)_baselineRenderingMode;
- (id)_getATSTypesetterGuts;
- (struct __CTTypesetter *)_ctTypesetter;
- (const char *)_bidiLevels;
- (long long)_baseWritingDirection;
- (void)_doBidiProcessing;
- (void)dealloc;
- (oneway void)release;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DVTInvalidation.h"

@class DVTStackBacktrace, IDEFileReference;

@interface IDEFileTextSettings : NSObject <DVTInvalidation>
{
    IDEFileReference *_fileReference;
    unsigned long long _textEncoding;
    long long _tabWidth;
    long long _indentWidth;
    unsigned long long _lineEndings;
    BOOL _usesTabs;
    BOOL _wrapsLines;
}

+ (void)initialize;
@property BOOL wrapsLines; // @synthesize wrapsLines=_wrapsLines;
@property long long indentWidth; // @synthesize indentWidth=_indentWidth;
@property long long tabWidth; // @synthesize tabWidth=_tabWidth;
@property BOOL usesTabs; // @synthesize usesTabs=_usesTabs;
@property unsigned long long textEncoding; // @synthesize textEncoding=_textEncoding;
@property unsigned long long lineEndings; // @synthesize lineEndings=_lineEndings;
@property(retain, nonatomic) IDEFileReference *fileReference; // @synthesize fileReference=_fileReference;
- (void).cxx_destruct;
- (id)description;
- (void)updateWrapLines;
- (void)updateIndentWidth;
- (void)updateTabWidth;
- (void)updateUsesTabs;
- (void)updateTextEncoding;
- (void)updateLineEndings;
- (id)_textPreferences;
- (void)primitiveInvalidate;
- (void)_clearFileReferenceObservations;
- (id)init;
- (void)unregisterObserversWithSourceTextView:(id)arg1 textStorage:(id)arg2;
- (void)registerObserversWithSourceTextView:(id)arg1 textStorage:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

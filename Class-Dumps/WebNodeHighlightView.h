//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class WebNodeHighlight;

__attribute__((visibility("hidden")))
@interface WebNodeHighlightView : NSView
{
    WebNodeHighlight *_webNodeHighlight;
}

- (id)webNodeHighlight;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (void)detachFromWebNodeHighlight;
- (void)dealloc;
- (id)initWithWebNodeHighlight:(id)arg1;

@end

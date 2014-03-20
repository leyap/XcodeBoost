//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class CALayer, PDFTileRenderer, PDFViewLayout;

@interface PDFTileRenderingOperation : NSOperation
{
    PDFTileRenderer *_renderer;
    struct CGImage *_imageRef;
    struct CGSize _size;
    double _contentsScale;
    struct CGRect _clipRect;
    struct CGPoint _scrollOffset;
    struct CGSize _contentSize;
    id _delegate;
    struct CGPath *_shadowMask;
    PDFViewLayout *_layout;
    CALayer *_layer;
}

@property(retain) CALayer *layer; // @synthesize layer=_layer;
@property(retain) PDFViewLayout *layout; // @synthesize layout=_layout;
@property id delegate; // @synthesize delegate=_delegate;
@property struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property struct CGPoint scrollOffset; // @synthesize scrollOffset=_scrollOffset;
@property double contentsScale; // @synthesize contentsScale=_contentsScale;
@property struct CGRect clipRect; // @synthesize clipRect=_clipRect;
@property struct CGSize size; // @synthesize size=_size;
@property PDFTileRenderer *renderer; // @synthesize renderer=_renderer;
- (id)description;
@property(readonly) struct CGImage *image;
- (BOOL)isOptimalForSize:(struct CGSize)arg1 scaleFactor:(double)arg2;
- (void)cancel;
- (void)drawShadowedRectInContext:(struct CGContext *)arg1 withBounds:(struct CGRect)arg2;
- (void)setShadowMask:(struct CGPath *)arg1;
- (struct CGPath *)shadowMask;
- (void)main;
- (void)dealloc;

@end

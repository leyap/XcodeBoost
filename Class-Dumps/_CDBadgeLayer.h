//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _CDBadgeLayer : CALayer
{
    NSString *_label;
    struct __CTFramesetter *_labelFramesetter;
}

@property(copy) NSString *label; // @synthesize label=_label;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)dealloc;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@interface PDFBaseLayer : CALayer
{
    unsigned int _repaintCount;
    int _layerType;
}

- (int)type;
- (void)setType:(int)arg1;
- (unsigned int)repaintCount;
- (unsigned int)incrementRepaintCount;
- (id)actionForKey:(id)arg1;
- (id)init;

@end

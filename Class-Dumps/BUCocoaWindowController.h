//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface BUCocoaWindowController : NSObject
{
    double _MaxX;
    double _MinY;
}

- (void)windowDidEndLiveResize:(id)arg1;
- (void)windowWillStartLiveResize:(id)arg1;
- (struct CGRect)windowWillChangeFrame:(id)arg1 toFrame:(struct CGRect)arg2;
- (BOOL)interceptsWindowClose:(id)arg1;

@end

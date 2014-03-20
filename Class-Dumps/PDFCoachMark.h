//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSAnimationDelegate.h"

@class NSAnimation, NSTimer, NSWindow;

@interface PDFCoachMark : NSObject <NSAnimationDelegate>
{
    NSWindow *_coachMarkWindow;
    struct CGAffineTransform _prePulseTransform;
    NSAnimation *_pulseAnimation;
    NSTimer *_startFadeOutTimer;
    NSAnimation *_fadeOutAnimation;
    BOOL _expired;
}

- (void)_startFadeOut:(id)arg1;
- (void)_startPulse;
- (void)_animatePulse;
- (void)_animateFadeOut;
- (void)animationDidEnd:(id)arg1;
- (void)_targetViewDidMoveOrChangeSize:(id)arg1;
- (struct CGRect)rectOnScreen;
- (void)expire;
- (void)dealloc;
- (id)initWithContentRect:(struct CGRect)arg1 contentImage:(id)arg2 forView:(id)arg3 selfDestruct:(BOOL)arg4;

@end

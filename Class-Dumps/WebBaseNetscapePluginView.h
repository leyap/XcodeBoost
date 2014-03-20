//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class WebFrame;

__attribute__((visibility("hidden")))
@interface WebBaseNetscapePluginView : NSView
{
    struct RetainPtr<WebNetscapePluginPackage> _pluginPackage;
    WebFrame *_webFrame;
    int _mode;
    BOOL _triedAndFailedToCreatePlugin;
    BOOL _loadManually;
    BOOL _shouldFireTimers;
    BOOL _isStarted;
    BOOL _hasFocus;
    BOOL _isCompletelyObscured;
    BOOL _isPrivateBrowsingEnabled;
    BOOL _snapshotting;
    struct RefPtr<WebCore::HTMLPlugInElement> _element;
    struct RetainPtr<NSString> _MIMEType;
    struct RetainPtr<NSURL> _baseURL;
    struct RetainPtr<NSURL> _sourceURL;
    struct RetainPtr<NSImage> _cachedSnapshot;
    long long _trackingTag;
}

+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)getFormValue:(id *)arg1;
- (id)pluginLayer;
- (struct CGRect)actualVisibleRectInWindow;
- (void)invalidatePluginContentRect:(struct CGRect)arg1;
- (struct CString)resolvedURLStringForURL:(const char *)arg1 target:(const char *)arg2;
- (BOOL)convertFromX:(double)arg1 andY:(double)arg2 space:(int)arg3 toX:(double *)arg4 andY:(double *)arg5 space:(int)arg6;
- (void)rightMouseUp:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (struct HTMLPlugInElement *)element;
- (id)currentWindow;
- (id)webView;
- (id)webFrame;
- (id)dataSource;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)renewGState;
- (void)preferencesHaveChanged:(id)arg1;
- (void)loginWindowDidSwitchToUser:(id)arg1;
- (void)loginWindowDidSwitchFromUser:(id)arg1;
- (void)windowDidDeminiaturize:(id)arg1;
- (void)windowDidMiniaturize:(id)arg1;
- (void)windowResignedKey:(id)arg1;
- (void)windowBecameKey:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)viewDidMoveToHostWindow;
- (void)viewWillMoveToHostWindow:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)clearCachedSnapshot;
- (void)cacheSnapshot;
- (BOOL)supportsSnapshotting;
- (BOOL)inFlatteningPaint;
- (BOOL)shouldClipOutPlugin;
- (void)stop;
- (void)start;
- (void)removeWindowObservers;
- (void)addWindowObservers;
- (void)setHasFocus:(BOOL)arg1;
- (void)sendActivateEvent:(BOOL)arg1;
- (BOOL)acceptsFirstResponder;
- (void)visibleRectDidChange;
- (struct CGRect)visibleRect;
- (struct CGRect)_windowClipRect;
- (void)restartTimers;
- (void)startTimers;
- (void)stopTimers;
- (void)resetTrackingRect;
- (void)removeTrackingRect;
- (void)privateBrowsingModeDidChange;
- (void)sendModifierEventWithKeyCode:(int)arg1 character:(BOOL)arg2;
- (void)updateAndSetWindow;
- (void)destroyPlugin;
- (BOOL)shouldStop;
- (void)loadStream;
- (BOOL)createPlugin;
- (void)windowFocusChanged:(BOOL)arg1;
- (void)focusChanged;
- (void)handleMouseExited:(id)arg1;
- (void)handleMouseEntered:(id)arg1;
- (void)handleMouseMoved:(id)arg1;
- (void)setAttributeKeys:(id)arg1 andValues:(id)arg2;
- (id)requestWithURLCString:(const char *)arg1;
- (id)URLWithCString:(const char *)arg1;
- (BOOL)isFlipped;
- (id)pluginPackage;
- (void)finalize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 pluginPackage:(id)arg2 URL:(id)arg3 baseURL:(id)arg4 MIMEType:(id)arg5 attributeKeys:(id)arg6 attributeValues:(id)arg7 loadManually:(BOOL)arg8 element:(PassRefPtr_145026a0)arg9;

@end

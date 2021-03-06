//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/UIScrollViewDelegate-Protocol.h>

@class NSString, WKWebView;

__attribute__((visibility("hidden")))
@interface WKScrollViewDelegateForwarder : NSObject <UIScrollViewDelegate>
{
    WKWebView *_internalDelegate;
    struct WeakObjCPtr<id<UIScrollViewDelegate>> _externalDelegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)initWithInternalDelegate:(id)arg1 externalDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


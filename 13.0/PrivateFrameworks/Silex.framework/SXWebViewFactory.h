//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXWebViewFactory-Protocol.h>

@class NSPointerArray, NSString, WKProcessPool, WKWebsiteDataStore;

@interface SXWebViewFactory : NSObject <SXWebViewFactory>
{
    NSPointerArray *_webViews;
    WKProcessPool *_processPool;
    WKWebsiteDataStore *_dataStore;
}

@property(readonly, nonatomic) WKWebsiteDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property(readonly, nonatomic) WKProcessPool *processPool; // @synthesize processPool=_processPool;
@property(retain, nonatomic) NSPointerArray *webViews; // @synthesize webViews=_webViews;
- (void).cxx_destruct;
- (void)assignRelatedWebViewToConfiguration:(id)arg1;
- (id)createWebViewWithUserContentController:(id)arg1;
- (id)initWithProcessPool:(id)arg1 websiteDataStore:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


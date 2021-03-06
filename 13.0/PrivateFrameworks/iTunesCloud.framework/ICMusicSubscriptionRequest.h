//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext;

@interface ICMusicSubscriptionRequest : ICRequestOperation
{
    ICStoreRequestContext *_storeRequestContext;
    long long _requestType;
    _Bool _requestingOfflineSlot;
}

- (void).cxx_destruct;
- (id)_bagKeyForRequestType:(long long)arg1;
- (void)execute;
- (id)initWithStoreRequestContext:(id)arg1 requestType:(long long)arg2 requestingOfflineSlot:(_Bool)arg3;

@end


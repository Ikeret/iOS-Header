//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarUIKit/CUIKUserActivity.h>

@class NSString;

@interface CUIKUserActivityWithSource : CUIKUserActivity
{
    long long _sourceType;
    NSString *_sourceHost;
    NSString *_sourceOwner;
}

- (void).cxx_destruct;
- (_Bool)_isLocalSource;
- (_Bool)_supportsConsistentExternalIDAcrossDevices;
- (_Bool)_supportsConsistentExternalIDAcrossDevices:(long long)arg1;
- (_Bool)_requiresHostAndOwner;
- (unsigned long long)isMatchForSource:(id)arg1;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSource:(id)arg1 type:(unsigned long long)arg2;

@end


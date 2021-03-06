//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/NSSecureCoding-Protocol.h>
#import <TelephonyUtilities/TUCallRequest-Protocol.h>
#import <TelephonyUtilities/TUVideoRequest-Protocol.h>

@class IDSDestination, NSDate, NSString;

@interface TUAnswerRequest : NSObject <NSSecureCoding, TUCallRequest, TUVideoRequest>
{
    _Bool _wantsHoldMusic;
    _Bool _pauseVideoToStart;
    _Bool _downgradeToAudio;
    NSString *_uniqueProxyIdentifier;
    NSString *_sourceIdentifier;
    IDSDestination *_endpointIDSDestination;
    NSString *_endpointRapportMediaSystemIdentifier;
    NSString *_endpointRapportEffectiveIdentifier;
    long long _behavior;
    NSDate *_dateAnswered;
    struct CGSize _localLandscapeAspectRatio;
    struct CGSize _localPortraitAspectRatio;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *dateAnswered; // @synthesize dateAnswered=_dateAnswered;
@property(nonatomic) long long behavior; // @synthesize behavior=_behavior;
@property(nonatomic) _Bool downgradeToAudio; // @synthesize downgradeToAudio=_downgradeToAudio;
@property(nonatomic) _Bool pauseVideoToStart; // @synthesize pauseVideoToStart=_pauseVideoToStart;
@property(nonatomic) _Bool wantsHoldMusic; // @synthesize wantsHoldMusic=_wantsHoldMusic;
@property(retain, nonatomic) NSString *endpointRapportEffectiveIdentifier; // @synthesize endpointRapportEffectiveIdentifier=_endpointRapportEffectiveIdentifier;
@property(retain, nonatomic) NSString *endpointRapportMediaSystemIdentifier; // @synthesize endpointRapportMediaSystemIdentifier=_endpointRapportMediaSystemIdentifier;
@property(retain, nonatomic) IDSDestination *endpointIDSDestination; // @synthesize endpointIDSDestination=_endpointIDSDestination;
@property(copy, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property(nonatomic) struct CGSize localPortraitAspectRatio; // @synthesize localPortraitAspectRatio=_localPortraitAspectRatio;
@property(nonatomic) struct CGSize localLandscapeAspectRatio; // @synthesize localLandscapeAspectRatio=_localLandscapeAspectRatio;
@property(copy, nonatomic) NSString *uniqueProxyIdentifier; // @synthesize uniqueProxyIdentifier=_uniqueProxyIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)init;
- (id)initWithCall:(id)arg1;
- (id)initWithUniqueProxyIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSString, NSURL;

@interface PKPaymentEligibilityResponse : PKPaymentWebServiceResponse
{
    NSString *_identifier;
    long long _eligibilityStatus;
    long long _cardType;
    NSURL *_termsURL;
    NSString *_termsID;
    NSString *_applicationIdentifier;
    NSString *_region;
    NSString *_nonce;
    NSURL *_learnMoreURL;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSURL *learnMoreURL; // @synthesize learnMoreURL=_learnMoreURL;
@property(readonly, copy, nonatomic) NSString *nonce; // @synthesize nonce=_nonce;
@property(readonly, copy, nonatomic) NSString *region; // @synthesize region=_region;
@property(readonly, copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(readonly, copy, nonatomic) NSString *termsID; // @synthesize termsID=_termsID;
@property(readonly, copy, nonatomic) NSURL *termsURL; // @synthesize termsURL=_termsURL;
@property(readonly, nonatomic) long long cardType; // @synthesize cardType=_cardType;
@property(readonly, nonatomic) long long eligibilityStatus; // @synthesize eligibilityStatus=_eligibilityStatus;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end


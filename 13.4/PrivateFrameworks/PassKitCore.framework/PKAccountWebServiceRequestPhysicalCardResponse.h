//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class PKPhysicalCard;

@interface PKAccountWebServiceRequestPhysicalCardResponse : PKAccountWebServiceResponse
{
    PKPhysicalCard *_physicalCard;
    unsigned long long _shipmentQuoteMinimum;
    unsigned long long _shipmentQuoteMaximum;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long shipmentQuoteMaximum; // @synthesize shipmentQuoteMaximum=_shipmentQuoteMaximum;
@property(readonly, nonatomic) unsigned long long shipmentQuoteMinimum; // @synthesize shipmentQuoteMinimum=_shipmentQuoteMinimum;
@property(readonly, nonatomic) PKPhysicalCard *physicalCard; // @synthesize physicalCard=_physicalCard;
- (id)initWithData:(id)arg1;

@end


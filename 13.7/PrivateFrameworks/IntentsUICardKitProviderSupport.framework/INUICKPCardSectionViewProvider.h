//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IntentsUICardKitProviderSupport/CRKIdentifiedCardSectionViewProviding-Protocol.h>
#import <IntentsUICardKitProviderSupport/INUICKPViewControllerAllocatingDelegate-Protocol.h>

@class NSArray, NSString;
@protocol CRCard, CRKCardSectionViewProviderDelegate, INUICKPViewControllerAllocating;

@interface INUICKPCardSectionViewProvider : NSObject <INUICKPViewControllerAllocatingDelegate, CRKIdentifiedCardSectionViewProviding>
{
    id <CRCard> _card;
    NSArray *_viewConfigurations;
    id <INUICKPViewControllerAllocating> _allocator;
    id <CRKCardSectionViewProviderDelegate> _cardSectionViewProviderDelegate;
}

+ (id)_viewConfigurationsFromAllocator:(id)arg1;
+ (void)requestInstanceWithCard:(id)arg1 delegate:(id)arg2 allocator:(id)arg3 reply:(CDUnknownBlockType)arg4;
+ (void)requestInstanceFromDefaultAllocatorWithCard:(id)arg1 delegate:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(nonatomic) __weak id <CRKCardSectionViewProviderDelegate> cardSectionViewProviderDelegate; // @synthesize cardSectionViewProviderDelegate=_cardSectionViewProviderDelegate;
@property(retain, nonatomic) id <INUICKPViewControllerAllocating> allocator; // @synthesize allocator=_allocator;
@property(copy, nonatomic) NSArray *viewConfigurations; // @synthesize viewConfigurations=_viewConfigurations;
@property(readonly, nonatomic) id <CRCard> card; // @synthesize card=_card;
- (double)boundingWidthForViewControllerAllocator:(id)arg1;
- (_Bool)vetoDisplayOfCardSection:(id)arg1;
- (unsigned long long)displayPriorityForCardSection:(id)arg1;
@property(readonly, copy, nonatomic) NSString *providerIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSFastEnumeration.h"
#import "NSSecureCoding.h"

@class NSMutableDictionary, NSMutableSet;

@interface CSLHexAppGraph : NSObject <NSFastEnumeration, NSCopying, NSSecureCoding>
{
    _Bool _neighborCountValid;
    _Bool _normalizedRadiusDirty;
    float _normalizedHorizontalRadius;
    float _normalizedVerticalRadius;
    struct unordered_map<CSL::Hex, CSLHexAppNode *__unsafe_unretained, std::__1::hash<CSL::Hex>, std::__1::equal_to<CSL::Hex>, std::__1::allocator<std::__1::pair<const CSL::Hex, CSLHexAppNode *__unsafe_unretained>>> _nodes;
    struct unordered_map<CSL::Hex, int, std::__1::hash<CSL::Hex>, std::__1::equal_to<CSL::Hex>, std::__1::allocator<std::__1::pair<const CSL::Hex, int>>> _neighborCounts;
    id <CSLHexAppGraphDelegate> _delegate;
    NSMutableDictionary *_nodesByBundle;
    NSMutableSet *_changedNodes;
}

+ (id)unarchiveFromPropertyList:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSMutableSet *changedNodes; // @synthesize changedNodes=_changedNodes;
@property(retain, nonatomic) NSMutableDictionary *nodesByBundle; // @synthesize nodesByBundle=_nodesByBundle;
@property(nonatomic) __weak id <CSLHexAppGraphDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initFromPropertyList:(id)arg1;
- (id)archiveToPropertyList;
- (id)description;
- (unsigned int)count;
- (id)allNodes;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)integrityCheckIgnoringNode:(id)arg1 shouldCheckNeighbors:(_Bool)arg2;
- (_Bool)integrityCheck;
- (void)removeNodeObjectForKey:(struct Hex)arg1;
- (void)setNodeObject:(id)arg1 forKey:(struct Hex)arg2;
- (void)setNode:(id)arg1 toHex:(struct Hex)arg2;
- (void)moveNode:(id)arg1 toHex:(struct Hex)arg2;
- (int)neighborCountOfHex:(struct Hex)arg1 upToMinimumNeighbors:(int)arg2 withinRange:(unsigned int)arg3;
- (void)updateNormalizedRadius;
@property(readonly, nonatomic) float normalizedVerticalRadius;
@property(readonly, nonatomic) float normalizedHorizontalRadius;
- (void)changeToMatch:(id)arg1;
- (void)resetToDefaults:(id)arg1;
- (_Bool)hex:(struct Hex)arg1 hasAtLeastNNearbyNodes:(int)arg2 withinRange:(unsigned int)arg3;
- (int)directNeighborCountOfHex:(struct Hex)arg1;
- (void)decrementNeighborCountsForHex:(struct Hex)arg1;
- (void)incrementNeighborCountsForHex:(struct Hex)arg1;
- (void)calculateNeighborCounts;
- (id)nodeAtHex:(struct Hex)arg1;
- (_Bool)containsNodeAtHex:(struct Hex)arg1;
- (id)nodeWithBundleIdentifier:(id)arg1;
- (void)revertMove;
- (void)commitMove;
- (void)moveNode:(id)arg1 toHex:(struct Hex)arg2 final:(_Bool)arg3;
- (void)collapseLonelyNodes:(id)arg1 connectedNodes:(id)arg2 disconnectedNodes:(id)arg3;
- (void)collapseLonelyNodes:(id)arg1;
- (_Bool)isLonelyHex:(struct Hex)arg1;
- (_Bool)checkNode:(id)arg1 connectedNodes:(id)arg2 disconnectedNodes:(id)arg3;
- (_Bool)checkHexes:(unordered_set_02834b46)arg1 connectedNodes:(id)arg2 disconnectedNodes:(id)arg3;
- (id)disconnectedNodesCheckingHexes:(unordered_set_02834b46)arg1;
- (void)collapseToHex:(struct Hex)arg1 ignoringNode:(id)arg2;
- (void)removeNodeWithoutReflowUsingIterator:(__hash_map_const_iterator_f7e24c6d)arg1;
- (void)removeNodeWithoutReflow:(id)arg1;
- (void)removeNodeUsingIterator:(__hash_map_const_iterator_f7e24c6d)arg1;
- (id)removeNodeAtHex:(struct Hex)arg1;
- (void)removeNode:(id)arg1;
- (struct Hex)firstGoodEmptyHex;
- (_Bool)addNode:(id)arg1;
- (id)addNodeWithBundleIdentifier:(id)arg1;
- (id)init;

@end


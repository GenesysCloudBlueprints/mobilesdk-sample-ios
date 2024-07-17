
// GenesysCloudCore version number: v1.9.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

/************************************************************/
// MARK: - StatementScope
/************************************************************/

/// An StatementScope is an enum of different agent states
typedef enum {
/// Sent when agent type is bot
    StatementScopeBot = 0,
/// Sent when agent type is live
    StatementScopeLive = 1,
/// Sent when agent type is messenger
    StatementScopeMessenger = 2,
/// Sent when agent type is none
    StatementScopeNone = -1
}StatementScope;

typedef enum {
/// Sent when agent type is bot
    StatementTypeOutgoing = 0,
/// Sent when agent type is live
    StatementTypeIncoming = 1,
/// Sent when agent type is messenger
    StatementTypeSystem = 2,
/// Sent when agent type is none
    StatementTypeNone = -1
}StatementType;
